
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlTdeInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlTdeInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlTdeInfo
    : public ModelBase
{
public:
    MysqlTdeInfo();
    virtual ~MysqlTdeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlTdeInfo members

    /// <summary>
    /// 是否打开透明加密功能。
    /// </summary>

    bool isEnableTde() const;
    bool enableTdeIsSet() const;
    void unsetenableTde();
    void setEnableTde(bool value);

    /// <summary>
    /// 透明加密算法，支持AES256、SM4加密算法。
    /// </summary>

    std::string getEncryptionType() const;
    bool encryptionTypeIsSet() const;
    void unsetencryptionType();
    void setEncryptionType(const std::string& value);


protected:
    bool enableTde_;
    bool enableTdeIsSet_;
    std::string encryptionType_;
    bool encryptionTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlTdeInfo_H_
