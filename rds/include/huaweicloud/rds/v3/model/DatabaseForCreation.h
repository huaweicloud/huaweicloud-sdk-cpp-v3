
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DatabaseForCreation_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DatabaseForCreation_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DatabaseForCreation
    : public ModelBase
{
public:
    DatabaseForCreation();
    virtual ~DatabaseForCreation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseForCreation members

    /// <summary>
    /// 数据库名称。 数据库名称长度可在1～64个字符之间，由字母、数字、中划线、下划线或$组成，$累计总长度小于等于10个字符，（MySQL 8.0不可包含$）。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库使用的字符集，例如utf8、gbk、ascii等MySQL支持的字符集。
    /// </summary>

    std::string getCharacterSet() const;
    bool characterSetIsSet() const;
    void unsetcharacterSet();
    void setCharacterSet(const std::string& value);

    /// <summary>
    /// 数据库备注，最大长度512
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string characterSet_;
    bool characterSetIsSet_;
    std::string comment_;
    bool commentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DatabaseForCreation_H_
