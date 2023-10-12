
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ResizeProtectedInstanceRequestParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ResizeProtectedInstanceRequestParams_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 保护实例变更规格请求数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ResizeProtectedInstanceRequestParams
    : public ModelBase
{
public:
    ResizeProtectedInstanceRequestParams();
    virtual ~ResizeProtectedInstanceRequestParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizeProtectedInstanceRequestParams members

    /// <summary>
    /// 变更规格后，生产站点云服务器和容灾站点云服务器的flavor ID。可通过查询云服务器规格变更支持列表接口获取。 说明：系统支持同时变更生产站点云服务器和容灾站点云服务器的规格。如需同时变更，请使用flavorRef参数，变更规格后，生产站点云服务器和容灾站点云服务器的规格相同。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 变更规格后，生产站点云服务器的flavor ID。可通过查询云服务器规格变更支持列表接口获取。 说明：系统支持仅变更生产站点云服务器的规格。此时，请使用production_flavorRef参数。当flavorRef参数有值时，production_flavorRef参数不生效。
    /// </summary>

    std::string getProductionFlavorRef() const;
    bool productionFlavorRefIsSet() const;
    void unsetproductionFlavorRef();
    void setProductionFlavorRef(const std::string& value);

    /// <summary>
    /// 变更规格后，容灾站点云服务器的flavor ID。可通过查询云服务器规格变更支持列表接口获取。 说明：系统支持仅变更容灾站点云服务器的规格。此时，请使用dr_flavorRef参数。当flavorRef参数有值时，dr_flavorRef参数不生效。
    /// </summary>

    std::string getDrFlavorRef() const;
    bool drFlavorRefIsSet() const;
    void unsetdrFlavorRef();
    void setDrFlavorRef(const std::string& value);

    /// <summary>
    /// 新生产站点专属主机ID。 说明：生产站点云服务器在专属主机上时，变更规格需要指定此参数。可以指定为生产站点云服务器当前所在专属主机ID或其他专属主机ID。
    /// </summary>

    std::string getProductionDedicatedHostId() const;
    bool productionDedicatedHostIdIsSet() const;
    void unsetproductionDedicatedHostId();
    void setProductionDedicatedHostId(const std::string& value);

    /// <summary>
    /// 新容灾站点专属主机ID。 说明：容灾站点云服务器在专属主机上时，变更规格需要指定此参数。可以指定为容灾站点云服务器当前所在专属主机ID或其他专属主机ID。
    /// </summary>

    std::string getDrDedicatedHostId() const;
    bool drDedicatedHostIdIsSet() const;
    void unsetdrDedicatedHostId();
    void setDrDedicatedHostId(const std::string& value);


protected:
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string productionFlavorRef_;
    bool productionFlavorRefIsSet_;
    std::string drFlavorRef_;
    bool drFlavorRefIsSet_;
    std::string productionDedicatedHostId_;
    bool productionDedicatedHostIdIsSet_;
    std::string drDedicatedHostId_;
    bool drDedicatedHostIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ResizeProtectedInstanceRequestParams_H_
