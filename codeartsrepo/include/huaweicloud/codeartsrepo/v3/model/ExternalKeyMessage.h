
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ExternalKeyMessage_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ExternalKeyMessage_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ExternalKeyMessage
    : public ModelBase
{
public:
    ExternalKeyMessage();
    virtual ~ExternalKeyMessage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExternalKeyMessage members

    /// <summary>
    /// 第三方保存在代码托管的关键信息
    /// </summary>

    std::string getExternalKeyMessage() const;
    bool externalKeyMessageIsSet() const;
    void unsetexternalKeyMessage();
    void setExternalKeyMessage(const std::string& value);

    /// <summary>
    /// 外部服务名称
    /// </summary>

    std::string getExternalService() const;
    bool externalServiceIsSet() const;
    void unsetexternalService();
    void setExternalService(const std::string& value);


protected:
    std::string externalKeyMessage_;
    bool externalKeyMessageIsSet_;
    std::string externalService_;
    bool externalServiceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ExternalKeyMessage_H_
