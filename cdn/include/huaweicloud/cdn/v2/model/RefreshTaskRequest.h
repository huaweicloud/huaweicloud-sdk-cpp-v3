
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_RefreshTaskRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_RefreshTaskRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/RefreshTaskRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  RefreshTaskRequest
    : public ModelBase
{
public:
    RefreshTaskRequest();
    virtual ~RefreshTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RefreshTaskRequest members

    /// <summary>
    /// 
    /// </summary>

    RefreshTaskRequestBody getRefreshTask() const;
    bool refreshTaskIsSet() const;
    void unsetrefreshTask();
    void setRefreshTask(const RefreshTaskRequestBody& value);


protected:
    RefreshTaskRequestBody refreshTask_;
    bool refreshTaskIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_RefreshTaskRequest_H_
