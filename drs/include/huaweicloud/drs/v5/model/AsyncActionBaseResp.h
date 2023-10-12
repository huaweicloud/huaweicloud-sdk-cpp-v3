
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_AsyncActionBaseResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_AsyncActionBaseResp_H_


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
/// 异步操作任务基础响应体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  AsyncActionBaseResp
    : public ModelBase
{
public:
    AsyncActionBaseResp();
    virtual ~AsyncActionBaseResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AsyncActionBaseResp members

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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_AsyncActionBaseResp_H_
