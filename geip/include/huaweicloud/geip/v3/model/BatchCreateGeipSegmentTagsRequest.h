
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateGeipSegmentTagsRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateGeipSegmentTagsRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/BatchCreateV2RequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  BatchCreateGeipSegmentTagsRequest
    : public ModelBase
{
public:
    BatchCreateGeipSegmentTagsRequest();
    virtual ~BatchCreateGeipSegmentTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateGeipSegmentTagsRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchCreateV2RequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreateV2RequestBody& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    BatchCreateV2RequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateGeipSegmentTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateGeipSegmentTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateGeipSegmentTagsRequest_H_
