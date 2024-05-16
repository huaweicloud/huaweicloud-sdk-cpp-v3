
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksInstanceInfo_volume_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksInstanceInfo_volume_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例节点存储信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  StarRocksInstanceInfo_volume
    : public ModelBase
{
public:
    StarRocksInstanceInfo_volume();
    virtual ~StarRocksInstanceInfo_volume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StarRocksInstanceInfo_volume members

    /// <summary>
    /// 实例节点存储类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 实例节点存储大小。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksInstanceInfo_volume_H_
