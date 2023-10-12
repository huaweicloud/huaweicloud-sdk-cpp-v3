
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlExtendInstanceVolumeRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlExtendInstanceVolumeRequest_H_


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
/// 扩容信息
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlExtendInstanceVolumeRequest
    : public ModelBase
{
public:
    MysqlExtendInstanceVolumeRequest();
    virtual ~MysqlExtendInstanceVolumeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlExtendInstanceVolumeRequest members

    /// <summary>
    /// 扩容后的容量。包周期实例初始最小磁盘规格为10G，实例所选容量大小必须为10的整数倍，且大于实际使用容量，最大为128000GB.  取值范围： 扩容时必须大于等于20G； 缩容时必须大于等于10G。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 表示是否自动从客户的账户中支付。  - true，为自动支付，默认该方式。 - false，为手动支付。
    /// </summary>

    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);


protected:
    int32_t size_;
    bool sizeIsSet_;
    std::string isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlExtendInstanceVolumeRequest_H_
