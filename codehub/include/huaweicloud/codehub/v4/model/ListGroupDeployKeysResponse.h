
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupDeployKeysResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupDeployKeysResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/DeployKeyDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListGroupDeployKeysResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGroupDeployKeysResponse();
    virtual ~ListGroupDeployKeysResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGroupDeployKeysResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<DeployKeyDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<DeployKeyDto>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    std::vector<DeployKeyDto> body_;
    bool bodyIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupDeployKeysResponse_H_
