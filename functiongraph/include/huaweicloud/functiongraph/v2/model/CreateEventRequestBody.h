
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateEventRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateEventRequestBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  CreateEventRequestBody
    : public ModelBase
{
public:
    CreateEventRequestBody();
    virtual ~CreateEventRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEventRequestBody members

    /// <summary>
    /// 测试事件名称。只能由字母、数字、中划线和下划线组成，且必须以大写或小写字母开头
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 测试事件content，为json字符串的base64编码
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string content_;
    bool contentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CreateEventRequestBody_H_
