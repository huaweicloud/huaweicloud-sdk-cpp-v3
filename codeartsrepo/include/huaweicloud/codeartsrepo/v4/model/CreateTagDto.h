
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateTagDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateTagDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CreateTagDto
    : public ModelBase
{
public:
    CreateTagDto();
    virtual ~CreateTagDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTagDto members

    /// <summary>
    /// 新建标签名称
    /// </summary>

    std::string getTagName() const;
    bool tagNameIsSet() const;
    void unsettagName();
    void setTagName(const std::string& value);

    /// <summary>
    /// 基于ref（分支、commitid）创建
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);

    /// <summary>
    /// 标签描述信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string tagName_;
    bool tagNameIsSet_;
    std::string ref_;
    bool refIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateTagDto_H_
