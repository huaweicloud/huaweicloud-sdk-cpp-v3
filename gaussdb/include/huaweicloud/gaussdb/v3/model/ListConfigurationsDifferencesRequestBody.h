
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListConfigurationsDifferencesRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListConfigurationsDifferencesRequestBody_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListConfigurationsDifferencesRequestBody
    : public ModelBase
{
public:
    ListConfigurationsDifferencesRequestBody();
    virtual ~ListConfigurationsDifferencesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListConfigurationsDifferencesRequestBody members

    /// <summary>
    /// 需要进行比较的源参数模板ID。  通过调用[查询参数模板](https://support.huaweicloud.com/api-gaussdb/ListGaussMySqlConfigurations.html)接口获取。  请求响应成功后在响应消息体中包含的“id”的值即为source_configuration_id值。
    /// </summary>

    std::string getSourceConfigurationId() const;
    bool sourceConfigurationIdIsSet() const;
    void unsetsourceConfigurationId();
    void setSourceConfigurationId(const std::string& value);

    /// <summary>
    /// 需要进行比较的目标参数模板ID。  通过调用[查询参数模板](https://support.huaweicloud.com/api-gaussdb/ListGaussMySqlConfigurations.html)接口获取。  请求响应成功后在响应消息体中包含的“id”的值即为target_configuration_id值。
    /// </summary>

    std::string getTargetConfigurationId() const;
    bool targetConfigurationIdIsSet() const;
    void unsettargetConfigurationId();
    void setTargetConfigurationId(const std::string& value);


protected:
    std::string sourceConfigurationId_;
    bool sourceConfigurationIdIsSet_;
    std::string targetConfigurationId_;
    bool targetConfigurationIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListConfigurationsDifferencesRequestBody_H_
