
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesByTagsRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesByTagsRequest_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/ListVolumesByTagsRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ListVolumesByTagsRequest
    : public ModelBase
{
public:
    ListVolumesByTagsRequest();
    virtual ~ListVolumesByTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListVolumesByTagsRequest members

    /// <summary>
    /// 
    /// </summary>

    ListVolumesByTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListVolumesByTagsRequestBody& value);


protected:
    ListVolumesByTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListVolumesByTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListVolumesByTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesByTagsRequest_H_
