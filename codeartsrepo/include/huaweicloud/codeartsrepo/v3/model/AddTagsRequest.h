
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddTagsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddTagsRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  AddTagsRequest
    : public ModelBase
{
public:
    AddTagsRequest();
    virtual ~AddTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddTagsRequest members

    /// <summary>
    /// 标签名称
    /// </summary>

    std::string getTagName() const;
    bool tagNameIsSet() const;
    void unsettagName();
    void setTagName(const std::string& value);

    /// <summary>
    /// 分支名称
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);

    /// <summary>
    /// 备注
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

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddTagsRequest_H_
