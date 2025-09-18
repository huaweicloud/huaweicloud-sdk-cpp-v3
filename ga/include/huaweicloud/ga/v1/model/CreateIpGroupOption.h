
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateIpGroupOption_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateIpGroupOption_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/CreateIpGroupIpOption.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建IP地址组的详细信息。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateIpGroupOption
    : public ModelBase
{
public:
    CreateIpGroupOption();
    virtual ~CreateIpGroupOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateIpGroupOption members

    /// <summary>
    /// IP地址组名称，取值范围：1~64个字符之间，只能由数字、字母、中划线和中文组成。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// IP地址组的描述信息，取值范围：0~255个字符之间，禁止输入字符：&lt;&gt;。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// IP地址组中的IP网段列表，一次最多支持添加20个条目。
    /// </summary>

    std::vector<CreateIpGroupIpOption>& getIpList();
    bool ipListIsSet() const;
    void unsetipList();
    void setIpList(const std::vector<CreateIpGroupIpOption>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<CreateIpGroupIpOption> ipList_;
    bool ipListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateIpGroupOption_H_
