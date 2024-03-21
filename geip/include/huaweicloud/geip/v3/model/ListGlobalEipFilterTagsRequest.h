
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipFilterTagsRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipFilterTagsRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/ListResourcesByTagsRequestBody.h>
#include <vector>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  ListGlobalEipFilterTagsRequest
    : public ModelBase
{
public:
    ListGlobalEipFilterTagsRequest();
    virtual ~ListGlobalEipFilterTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGlobalEipFilterTagsRequest members

    /// <summary>
    /// 
    /// </summary>

    std::vector<int32_t>& getLimit();
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(std::vector<int32_t> value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<int32_t>& getOffset();
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(std::vector<int32_t> value);

    /// <summary>
    /// 
    /// </summary>

    ListResourcesByTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListResourcesByTagsRequestBody& value);


protected:
    std::vector<int32_t> limit_;
    bool limitIsSet_;
    std::vector<int32_t> offset_;
    bool offsetIsSet_;
    ListResourcesByTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListGlobalEipFilterTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListGlobalEipFilterTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipFilterTagsRequest_H_
