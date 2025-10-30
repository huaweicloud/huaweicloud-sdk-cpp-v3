
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryTuningParamsRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryTuningParamsRequest_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryTuningParamsRequest
    : public ModelBase
{
public:
    QueryTuningParamsRequest();
    virtual ~QueryTuningParamsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTuningParamsRequest members

    /// <summary>
    /// 任务ID，如果是主备任务，使用父任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 请求语言类型
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    QueryTuningParamsRequest& dereference_from_shared_ptr(std::shared_ptr<QueryTuningParamsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryTuningParamsRequest_H_
