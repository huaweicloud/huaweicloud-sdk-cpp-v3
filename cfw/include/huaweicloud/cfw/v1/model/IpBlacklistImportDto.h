
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistImportDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistImportDto_H_


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
/// 导入IP黑名单的消息body体，包括了导入的方式、生效范围和IP黑名单信息。
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpBlacklistImportDto
    : public ModelBase
{
public:
    IpBlacklistImportDto();
    virtual ~IpBlacklistImportDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpBlacklistImportDto members

    /// <summary>
    /// IP黑名单导入的方式，0表示增量导入，在原来的基础上追加；1表示全量导入，新导入的IP黑名单会覆盖已有的IP黑名单
    /// </summary>

    int32_t getAddType() const;
    bool addTypeIsSet() const;
    void unsetaddType();
    void setAddType(int32_t value);

    /// <summary>
    /// IP列表，当前支持不同的IP地址之间使用“,” 、“ ”、“;”、“\\r\\n”、“\\n”、“\\t”等分割符进行分割。
    /// </summary>

    std::string getIpBlacklist() const;
    bool ipBlacklistIsSet() const;
    void unsetipBlacklist();
    void setIpBlacklist(const std::string& value);

    /// <summary>
    /// 生效范围，1表示生效范围为eip, 2表示生效范围为nat, [1 2]表示 生效范围为eip和nat
    /// </summary>

    std::vector<int32_t>& getEffectScope();
    bool effectScopeIsSet() const;
    void unseteffectScope();
    void setEffectScope(std::vector<int32_t> value);


protected:
    int32_t addType_;
    bool addTypeIsSet_;
    std::string ipBlacklist_;
    bool ipBlacklistIsSet_;
    std::vector<int32_t> effectScope_;
    bool effectScopeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistImportDto_H_
