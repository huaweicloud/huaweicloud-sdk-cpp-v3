
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListProjectTagsRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListProjectTagsRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_DDS_V3_EXPORT  ListProjectTagsRequest
    : public ModelBase
{
public:
    ListProjectTagsRequest();
    virtual ~ListProjectTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectTagsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProjectTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListProjectTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListProjectTagsRequest_H_
