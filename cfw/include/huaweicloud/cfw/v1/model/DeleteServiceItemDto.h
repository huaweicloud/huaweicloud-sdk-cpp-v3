
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteServiceItemDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteServiceItemDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  DeleteServiceItemDto
    : public ModelBase
{
public:
    DeleteServiceItemDto();
    virtual ~DeleteServiceItemDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteServiceItemDto members

    /// <summary>
    /// 服务组id
    /// </summary>

    std::string getSetId() const;
    bool setIdIsSet() const;
    void unsetsetId();
    void setSetId(const std::string& value);

    /// <summary>
    /// 服务组成员id列表
    /// </summary>

    std::vector<std::string>& getServiceItemIds();
    bool serviceItemIdsIsSet() const;
    void unsetserviceItemIds();
    void setServiceItemIds(const std::vector<std::string>& value);


protected:
    std::string setId_;
    bool setIdIsSet_;
    std::vector<std::string> serviceItemIds_;
    bool serviceItemIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteServiceItemDto_H_
