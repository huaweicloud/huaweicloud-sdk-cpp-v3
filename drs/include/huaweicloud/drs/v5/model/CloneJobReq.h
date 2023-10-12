
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CloneJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CloneJobReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 克隆任务请求体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  CloneJobReq
    : public ModelBase
{
public:
    CloneJobReq();
    virtual ~CloneJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CloneJobReq members

    /// <summary>
    /// 被克隆任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 克隆任务名称。名称在4位到50位之间，必须以字母开头，可以包含字母、数字、中划线或下划线，不能包含其他特殊字符，任务名称不能重复。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务版本号，新UX任务为2.0。默认为空，即克隆老任务。
    /// </summary>

    std::string getTaskVersion() const;
    bool taskVersionIsSet() const;
    void unsettaskVersion();
    void setTaskVersion(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string taskVersion_;
    bool taskVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CloneJobReq_H_
