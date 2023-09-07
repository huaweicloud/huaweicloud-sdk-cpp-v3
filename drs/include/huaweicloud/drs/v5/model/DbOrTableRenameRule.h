
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DbOrTableRenameRule_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DbOrTableRenameRule_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 库表更名规则  可以在名称添加前后缀， 填写前缀名，会给库表名称前面添加对前缀名，填写后缀名，会给库表名称后面添加对后缀名； 当前缀名和后缀名都写时，会给库表名称前后面添加对字符；
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DbOrTableRenameRule
    : public ModelBase
{
public:
    DbOrTableRenameRule();
    virtual ~DbOrTableRenameRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DbOrTableRenameRule members

    /// <summary>
    /// 前缀名称 当type为prefixAndSuffix， 填写prefix_name，库表名称仅增加前缀，若同时也填写suffix_name, 库表名称增加前后缀
    /// </summary>

    std::string getPrefixName() const;
    bool prefixNameIsSet() const;
    void unsetprefixName();
    void setPrefixName(const std::string& value);

    /// <summary>
    /// 后缀名称 当type为prefixAndSuffix， 填写suffix_name，库表名称仅增加后缀，若同时也填写prefix_name, 库表名称同时增加前后缀
    /// </summary>

    std::string getSuffixName() const;
    bool suffixNameIsSet() const;
    void unsetsuffixName();
    void setSuffixName(const std::string& value);

    /// <summary>
    /// 库表映射类型 prefixAndSuffix:前缀、后缀或者前后缀
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string prefixName_;
    bool prefixNameIsSet_;
    std::string suffixName_;
    bool suffixNameIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DbOrTableRenameRule_H_
