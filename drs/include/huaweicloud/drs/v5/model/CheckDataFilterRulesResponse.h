
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CheckDataFilterRulesResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CheckDataFilterRulesResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  CheckDataFilterRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckDataFilterRulesResponse();
    virtual ~CheckDataFilterRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckDataFilterRulesResponse members

    /// <summary>
    /// 异步校验任务的查询标识。提交数据过滤规则校验请求后返回的任务ID，用于后续通过查询/v5/{project_id}/job/{job_id}/data-filtering/result接口获取校验结果。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CheckDataFilterRulesResponse_H_
