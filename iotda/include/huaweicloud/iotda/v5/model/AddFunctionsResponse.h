
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddFunctionsResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddFunctionsResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddFunctionsResponse
    : public ModelBase, public HttpResponse
{
public:
    AddFunctionsResponse();
    virtual ~AddFunctionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddFunctionsResponse members

    /// <summary>
    /// **参数说明**：资源空间ID。此参数为非必选参数，存在多资源空间的用户需要使用该接口时，可以携带该参数查询指定资源空间下的产品列表，不携带该参数则会查询该用户下所有产品列表。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备关联的产品ID，用于唯一标识一个产品模型，创建产品后获得。方法请参见 [[创建产品](https://support.huaweicloud.com/api-iothub/iot_06_v5_0050.html)](tag:hws)[[创建产品](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0050.html)](tag:hws_hk)。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// **参数说明**：函数ID，产品配置函数后生成的唯一标识。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getFunctionId() const;
    bool functionIdIsSet() const;
    void unsetfunctionId();
    void setFunctionId(const std::string& value);

    /// <summary>
    /// **参数说明**：产品关联函数的URN（Uniform Resource Name）。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）、分隔符（:）的组合。
    /// </summary>

    std::string getUrn() const;
    bool urnIsSet() const;
    void unseturn();
    void setUrn(const std::string& value);

    /// <summary>
    /// **参数说明**：编解码函数描述信息。 **取值范围**：128，只允许中文、字母、数字、以及_? &#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：产品函数创建时间。**格式**：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::string functionId_;
    bool functionIdIsSet_;
    std::string urn_;
    bool urnIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddFunctionsResponse_H_
