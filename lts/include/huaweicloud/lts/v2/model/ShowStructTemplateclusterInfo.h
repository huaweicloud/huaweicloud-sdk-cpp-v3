
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowStructTemplateclusterInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowStructTemplateclusterInfo_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结构化类型。
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ShowStructTemplateclusterInfo
    : public ModelBase
{
public:
    ShowStructTemplateclusterInfo();
    virtual ~ShowStructTemplateclusterInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStructTemplateclusterInfo members

    /// <summary>
    /// 测试
    /// </summary>

    std::string getClusterName() const;
    bool clusterNameIsSet() const;
    void unsetclusterName();
    void setClusterName(const std::string& value);

    /// <summary>
    /// 测试
    /// </summary>

    std::string getKafkaBootstrapServers() const;
    bool kafkaBootstrapServersIsSet() const;
    void unsetkafkaBootstrapServers();
    void setKafkaBootstrapServers(const std::string& value);

    /// <summary>
    /// 测试
    /// </summary>

    bool isKafkaSslEnable() const;
    bool kafkaSslEnableIsSet() const;
    void unsetkafkaSslEnable();
    void setKafkaSslEnable(bool value);


protected:
    std::string clusterName_;
    bool clusterNameIsSet_;
    std::string kafkaBootstrapServers_;
    bool kafkaBootstrapServersIsSet_;
    bool kafkaSslEnable_;
    bool kafkaSslEnableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowStructTemplateclusterInfo_H_
