
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DeletefavoriteRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DeletefavoriteRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  DeletefavoriteRequest
    : public ModelBase
{
public:
    DeletefavoriteRequest();
    virtual ~DeletefavoriteRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeletefavoriteRequest members

    /// <summary>
    /// 收藏资源id
    /// </summary>

    std::string getFavResId() const;
    bool favResIdIsSet() const;
    void unsetfavResId();
    void setFavResId(const std::string& value);

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。  最小长度：30  最大长度：30
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    std::string favResId_;
    bool favResIdIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeletefavoriteRequest& dereference_from_shared_ptr(std::shared_ptr<DeletefavoriteRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DeletefavoriteRequest_H_
