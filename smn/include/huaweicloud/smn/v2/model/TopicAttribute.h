
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_TopicAttribute_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_TopicAttribute_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/smn/v2/model/AccessPolicy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  TopicAttribute
    : public ModelBase
{
public:
    TopicAttribute();
    virtual ~TopicAttribute();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TopicAttribute members

    /// <summary>
    /// 
    /// </summary>

    AccessPolicy getAccessPolicy() const;
    bool accessPolicyIsSet() const;
    void unsetaccessPolicy();
    void setAccessPolicy(const AccessPolicy& value);

    /// <summary>
    /// topic的简介
    /// </summary>

    std::string getIntroduction() const;
    bool introductionIsSet() const;
    void unsetintroduction();
    void setIntroduction(const std::string& value);


protected:
    AccessPolicy accessPolicy_;
    bool accessPolicyIsSet_;
    std::string introduction_;
    bool introductionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_TopicAttribute_H_
