
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_Tag_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_Tag_H_


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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  Tag
    : public ModelBase
{
public:
    Tag();
    virtual ~Tag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Tag members

    /// <summary>
    /// 是否与分支重名
    /// </summary>

    bool isIsDoubleName() const;
    bool isDoubleNameIsSet() const;
    void unsetisDoubleName();
    void setIsDoubleName(bool value);

    /// <summary>
    /// 标签名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    bool isDoubleName_;
    bool isDoubleNameIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_Tag_H_
