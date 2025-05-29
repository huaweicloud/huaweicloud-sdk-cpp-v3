
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildRecord_build_record_type_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildRecord_build_record_type_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 构建记录类型
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  BuildRecord_build_record_type
    : public ModelBase
{
public:
    BuildRecord_build_record_type();
    virtual ~BuildRecord_build_record_type();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BuildRecord_build_record_type members

    /// <summary>
    /// 是否rerun
    /// </summary>

    bool isRerun() const;
    bool rerunIsSet() const;
    void unsetrerun();
    void setRerun(bool value);

    /// <summary>
    /// 触发类型
    /// </summary>

    std::string getTriggerType() const;
    bool triggerTypeIsSet() const;
    void unsettriggerType();
    void setTriggerType(const std::string& value);

    /// <summary>
    /// 记录类型
    /// </summary>

    std::string getRecordType() const;
    bool recordTypeIsSet() const;
    void unsetrecordType();
    void setRecordType(const std::string& value);

    /// <summary>
    /// 是否返回
    /// </summary>

    bool isIsRerun() const;
    bool isRerunIsSet() const;
    void unsetisRerun();
    void setIsRerun(bool value);


protected:
    bool rerun_;
    bool rerunIsSet_;
    std::string triggerType_;
    bool triggerTypeIsSet_;
    std::string recordType_;
    bool recordTypeIsSet_;
    bool isRerun_;
    bool isRerunIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildRecord_build_record_type_H_
