
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ExecuteJobActionResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ExecuteJobActionResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_DRS_V5_EXPORT  ExecuteJobActionResponse
    : public ModelBase, public HttpResponse
{
public:
    ExecuteJobActionResponse();
    virtual ~ExecuteJobActionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExecuteJobActionResponse members

    /// <summary>
    /// 异步操作任务响应查询ID。
    /// </summary>

    std::string getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(const std::string& value);


protected:
    std::string queryId_;
    bool queryIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ExecuteJobActionResponse_H_
