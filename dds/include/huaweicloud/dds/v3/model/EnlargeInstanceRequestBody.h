
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_EnlargeInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_EnlargeInstanceRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dds/v3/model/AddShardingNodeVolumeOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  EnlargeInstanceRequestBody
    : public ModelBase
{
public:
    EnlargeInstanceRequestBody();
    virtual ~EnlargeInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EnlargeInstanceRequestBody members

    /// <summary>
    /// 待扩容的对象类型。 - 扩容mongos节点时，取值为“mongos”。 - 扩容shard组时，取值为“shard”。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 资源规格编码。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 一个集群实例下，最多支持16个mongos节点和16个shard组。
    /// </summary>

    std::string getNum() const;
    bool numIsSet() const;
    void unsetnum();
    void setNum(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AddShardingNodeVolumeOption getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const AddShardingNodeVolumeOption& value);

    /// <summary>
    /// 扩容包年包月实例的节点数量时可指定，表示是否自动从账户中支付，此字段不影响自动续订的支付方式。 - true，表示自动从账户中支付。 - false，表示手动从账户中支付，默认为该方式。
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    std::string num_;
    bool numIsSet_;
    AddShardingNodeVolumeOption volume_;
    bool volumeIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_EnlargeInstanceRequestBody_H_
