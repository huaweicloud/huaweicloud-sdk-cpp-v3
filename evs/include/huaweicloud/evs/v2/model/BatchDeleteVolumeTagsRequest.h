
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchDeleteVolumeTagsRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchDeleteVolumeTagsRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/evs/v2/model/BatchDeleteVolumeTagsRequestBody.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  BatchDeleteVolumeTagsRequest
    : public ModelBase
{
public:
    BatchDeleteVolumeTagsRequest();
    virtual ~BatchDeleteVolumeTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteVolumeTagsRequest members

    /// <summary>
    /// 磁盘ID。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchDeleteVolumeTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteVolumeTagsRequestBody& value);


protected:
    std::string volumeId_;
    bool volumeIdIsSet_;
    BatchDeleteVolumeTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteVolumeTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteVolumeTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchDeleteVolumeTagsRequest_H_
