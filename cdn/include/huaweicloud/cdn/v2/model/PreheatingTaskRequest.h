
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_PreheatingTaskRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_PreheatingTaskRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/PreheatingTaskRequestBody.h>

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
class HUAWEICLOUD_CDN_V2_EXPORT  PreheatingTaskRequest
    : public ModelBase
{
public:
    PreheatingTaskRequest();
    virtual ~PreheatingTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PreheatingTaskRequest members

    /// <summary>
    /// 
    /// </summary>

    PreheatingTaskRequestBody getPreheatingTask() const;
    bool preheatingTaskIsSet() const;
    void unsetpreheatingTask();
    void setPreheatingTask(const PreheatingTaskRequestBody& value);


protected:
    PreheatingTaskRequestBody preheatingTask_;
    bool preheatingTaskIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_PreheatingTaskRequest_H_
