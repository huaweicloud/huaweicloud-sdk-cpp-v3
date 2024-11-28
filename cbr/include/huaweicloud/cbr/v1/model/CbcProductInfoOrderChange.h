
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CbcProductInfoOrderChange_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CbcProductInfoOrderChange_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  CbcProductInfoOrderChange
    : public ModelBase
{
public:
    CbcProductInfoOrderChange();
    virtual ~CbcProductInfoOrderChange();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CbcProductInfoOrderChange members

    /// <summary>
    /// 产品标识，通过订购询价接口获得，长度限制：1-64，只能由字母、数字、“_”、“-”组成。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 资源容量大小，取值范围：10-10485760
    /// </summary>

    int32_t getResourceSize() const;
    bool resourceSizeIsSet() const;
    void unsetresourceSize();
    void setResourceSize(int32_t value);

    /// <summary>
    /// 资源容量度量标识，枚举值17：GB
    /// </summary>

    int32_t getResourceSizeMeasureId() const;
    bool resourceSizeMeasureIdIsSet() const;
    void unsetresourceSizeMeasureId();
    void setResourceSizeMeasureId(int32_t value);

    /// <summary>
    /// 用户购买云服务产品的资源规格 Enum: [vault.backup.server.normal，vault.backup.turbo.normal, vault.backup.database.normal，vault.backup.volume.normal，vault.backup.rds.normal，vault.replication.server.normal，vault.hybrid.server.normal]
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);


protected:
    std::string productId_;
    bool productIdIsSet_;
    int32_t resourceSize_;
    bool resourceSizeIsSet_;
    int32_t resourceSizeMeasureId_;
    bool resourceSizeMeasureIdIsSet_;
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CbcProductInfoOrderChange_H_
