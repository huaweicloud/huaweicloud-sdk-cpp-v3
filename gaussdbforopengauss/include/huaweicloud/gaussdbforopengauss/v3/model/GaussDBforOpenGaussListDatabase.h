
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussListDatabase_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussListDatabase_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  GaussDBforOpenGaussListDatabase
    : public ModelBase
{
public:
    GaussDBforOpenGaussListDatabase();
    virtual ~GaussDBforOpenGaussListDatabase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GaussDBforOpenGaussListDatabase members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库所属用户。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 数据库使用的字符集，例如UTF8。
    /// </summary>

    std::string getCharacterSet() const;
    bool characterSetIsSet() const;
    void unsetcharacterSet();
    void setCharacterSet(const std::string& value);

    /// <summary>
    /// 数据库排序集，例如en_US.UTF-8等。
    /// </summary>

    std::string getCollateSet() const;
    bool collateSetIsSet() const;
    void unsetcollateSet();
    void setCollateSet(const std::string& value);

    /// <summary>
    /// 数据库大小（单位：MB）。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string characterSet_;
    bool characterSetIsSet_;
    std::string collateSet_;
    bool collateSetIsSet_;
    std::string size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussListDatabase_H_
