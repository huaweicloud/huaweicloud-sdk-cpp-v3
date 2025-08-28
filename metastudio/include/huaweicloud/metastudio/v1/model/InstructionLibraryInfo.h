
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InstructionLibraryInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InstructionLibraryInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 指令集基本信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  InstructionLibraryInfo
    : public ModelBase
{
public:
    InstructionLibraryInfo();
    virtual ~InstructionLibraryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstructionLibraryInfo members

    /// <summary>
    /// 指令集ID。
    /// </summary>

    std::string getInstructionLibraryId() const;
    bool instructionLibraryIdIsSet() const;
    void unsetinstructionLibraryId();
    void setInstructionLibraryId(const std::string& value);

    /// <summary>
    /// 指令集名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);


protected:
    std::string instructionLibraryId_;
    bool instructionLibraryIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InstructionLibraryInfo_H_
