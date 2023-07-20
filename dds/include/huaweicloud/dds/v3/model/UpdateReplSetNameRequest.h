
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateReplSetNameRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateReplSetNameRequest_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/MongoUpdateReplSetV3RequestBody.h>
#include <string>

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
class HUAWEICLOUD_DDS_V3_EXPORT  UpdateReplSetNameRequest
    : public ModelBase
{
public:
    UpdateReplSetNameRequest();
    virtual ~UpdateReplSetNameRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateReplSetNameRequest members

    /// <summary>
    /// 实例ID，可以调用“[查询实例列表和详情](x-wc://file&#x3D;zh-cn_topic_0000001369935045.xml)”接口获取。如果未申请实例，可以调用“[创建实例](x-wc://file&#x3D;zh-cn_topic_0000001369734929.xml)”接口创建。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MongoUpdateReplSetV3RequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const MongoUpdateReplSetV3RequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    MongoUpdateReplSetV3RequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateReplSetNameRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateReplSetNameRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateReplSetNameRequest_H_
