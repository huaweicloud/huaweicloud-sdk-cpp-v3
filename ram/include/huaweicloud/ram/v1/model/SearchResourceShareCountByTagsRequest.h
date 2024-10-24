
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareCountByTagsRequest_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareCountByTagsRequest_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ram/v1/model/ResourceSharesByTagsReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  SearchResourceShareCountByTagsRequest
    : public ModelBase
{
public:
    SearchResourceShareCountByTagsRequest();
    virtual ~SearchResourceShareCountByTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchResourceShareCountByTagsRequest members

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceSharesByTagsReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ResourceSharesByTagsReqBody& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    ResourceSharesByTagsReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchResourceShareCountByTagsRequest& dereference_from_shared_ptr(std::shared_ptr<SearchResourceShareCountByTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareCountByTagsRequest_H_
