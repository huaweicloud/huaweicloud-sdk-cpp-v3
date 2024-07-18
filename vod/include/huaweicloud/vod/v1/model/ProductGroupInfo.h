
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ProductGroupInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ProductGroupInfo_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ProductUrlInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ProductGroupInfo
    : public ModelBase
{
public:
    ProductGroupInfo();
    virtual ~ProductGroupInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProductGroupInfo members

    /// <summary>
    /// 模板组ID
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 产物信息
    /// </summary>

    std::vector<ProductUrlInfo>& getProducts();
    bool productsIsSet() const;
    void unsetproducts();
    void setProducts(const std::vector<ProductUrlInfo>& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::vector<ProductUrlInfo> products_;
    bool productsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ProductGroupInfo_H_
