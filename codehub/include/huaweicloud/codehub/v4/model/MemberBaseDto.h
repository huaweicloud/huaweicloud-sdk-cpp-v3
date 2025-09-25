
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MemberBaseDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MemberBaseDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 成员基础信息
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  MemberBaseDto
    : public ModelBase
{
public:
    MemberBaseDto();
    virtual ~MemberBaseDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MemberBaseDto members

    /// <summary>
    /// 用户id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// iam_id
    /// </summary>

    std::string getIamId() const;
    bool iamIdIsSet() const;
    void unsetiamId();
    void setIamId(const std::string& value);

    /// <summary>
    /// 成员名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string iamId_;
    bool iamIdIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MemberBaseDto_H_
