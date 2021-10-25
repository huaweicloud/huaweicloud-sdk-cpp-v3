
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_CommonPoolsWithBorderGroupDict_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_CommonPoolsWithBorderGroupDict_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 分组详情
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  CommonPoolsWithBorderGroupDict
    : public ModelBase
{
public:
    CommonPoolsWithBorderGroupDict();
    virtual ~CommonPoolsWithBorderGroupDict();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CommonPoolsWithBorderGroupDict members

    /// <summary>
    /// 同组的公共池列表
    /// </summary>

    std::vector<std::string>& getPublicipPools();
    bool publicipPoolsIsSet() const;
    void unsetpublicipPools();
    void setPublicipPools(const std::vector<std::string>& value);

    /// <summary>
    /// 分组：中心还是边缘
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);


protected:
    std::vector<std::string> publicipPools_;
    bool publicipPoolsIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_CommonPoolsWithBorderGroupDict_H_
