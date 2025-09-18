
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateCustomfieldV1Req_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateCustomfieldV1Req_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateCustomfieldV1Req
    : public ModelBase
{
public:
    CreateCustomfieldV1Req();
    virtual ~CreateCustomfieldV1Req();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCustomfieldV1Req members

    /// <summary>
    /// 字段名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 自定义字段类型 可选类型  textArea|select|radio|text|checkbox|date|time_date|number
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 字段选项
    /// </summary>

    std::string getOptions() const;
    bool optionsIsSet() const;
    void unsetoptions();
    void setOptions(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getMemo() const;
    bool memoIsSet() const;
    void unsetmemo();
    void setMemo(const std::string& value);

    /// <summary>
    /// 工作项类型
    /// </summary>

    std::string getScrumType() const;
    bool scrumTypeIsSet() const;
    void unsetscrumType();
    void setScrumType(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string options_;
    bool optionsIsSet_;
    std::string memo_;
    bool memoIsSet_;
    std::string scrumType_;
    bool scrumTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateCustomfieldV1Req_H_
