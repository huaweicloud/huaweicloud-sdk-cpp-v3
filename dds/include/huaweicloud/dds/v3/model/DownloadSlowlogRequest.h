
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DownloadSlowlogRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DownloadSlowlogRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dds/v3/model/DownloadSlowlogRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  DownloadSlowlogRequest
    : public ModelBase
{
public:
    DownloadSlowlogRequest();
    virtual ~DownloadSlowlogRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadSlowlogRequest members

    /// <summary>
    /// 实例ID，可以调用“查询实例列表和详情”接口获取。如果未申请实例，可以调用“创建实例”接口创建。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DownloadSlowlogRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DownloadSlowlogRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    DownloadSlowlogRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadSlowlogRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadSlowlogRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DownloadSlowlogRequest_H_
