
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ProductGroupDelFailInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ProductGroupDelFailInfo_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ProductDelFailInfo.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ProductGroupDelFailInfo
    : public ModelBase
{
public:
    ProductGroupDelFailInfo();
    virtual ~ProductGroupDelFailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProductGroupDelFailInfo members

    /// <summary>
    /// 模板组ID
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 模板组删除失败的原因
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);

    /// <summary>
    /// 删除失败的产物的信息
    /// </summary>

    std::vector<ProductDelFailInfo>& getProducts();
    bool productsIsSet() const;
    void unsetproducts();
    void setProducts(const std::vector<ProductDelFailInfo>& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;
    std::vector<ProductDelFailInfo> products_;
    bool productsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ProductGroupDelFailInfo_H_
