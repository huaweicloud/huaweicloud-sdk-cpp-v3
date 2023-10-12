
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_CommonPoolDict_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_CommonPoolDict_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 公共池详情
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  CommonPoolDict
    : public ModelBase
{
public:
    CommonPoolDict();
    virtual ~CommonPoolDict();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommonPoolDict members

    /// <summary>
    /// 公共池名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 公共池类型，如bgp，sbgp等
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 已经使用的ip数量
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);

    /// <summary>
    /// 功能说明：表示中心站点资源或者边缘站点资源 取值范围： center、边缘站点名称 约束：publicip只能绑定该字段相同的资源
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// 默认不展示，取值, 公共池ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：表示此publicip可以加入的共享带宽类型列表，如果为空列表，则表示该           publicip不能加入任何共享带宽 约束：publicip只能加入到有该带宽类型的共享带宽中
    /// </summary>

    std::vector<std::string>& getAllowShareBandwidthTypes();
    bool allowShareBandwidthTypesIsSet() const;
    void unsetallowShareBandwidthTypes();
    void setAllowShareBandwidthTypes(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t used_;
    bool usedIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<std::string> allowShareBandwidthTypes_;
    bool allowShareBandwidthTypesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_CommonPoolDict_H_
