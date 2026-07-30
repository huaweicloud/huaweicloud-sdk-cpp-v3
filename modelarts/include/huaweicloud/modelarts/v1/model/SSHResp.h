
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SSHResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SSHResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TaskUrls.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// SSH连接信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SSHResp
    : public ModelBase
{
public:
    SSHResp();
    virtual ~SSHResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SSHResp members

    /// <summary>
    /// SSH密钥对名称，可以在云服务器控制台（ECS）“密钥对”页面创建和查看。
    /// </summary>

    std::vector<std::string>& getKeyPairNames();
    bool keyPairNamesIsSet() const;
    void unsetkeyPairNames();
    void setKeyPairNames(const std::vector<std::string>& value);

    /// <summary>
    /// SSH连接地址信息。
    /// </summary>

    std::vector<TaskUrls>& getTaskUrls();
    bool taskUrlsIsSet() const;
    void unsettaskUrls();
    void setTaskUrls(const std::vector<TaskUrls>& value);


protected:
    std::vector<std::string> keyPairNames_;
    bool keyPairNamesIsSet_;
    std::vector<TaskUrls> taskUrls_;
    bool taskUrlsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SSHResp_H_
