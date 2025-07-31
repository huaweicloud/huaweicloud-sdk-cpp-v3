
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessTopMemberVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessTopMemberVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AccessTopMemberVO
    : public ModelBase
{
public:
    AccessTopMemberVO();
    virtual ~AccessTopMemberVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessTopMemberVO members

    /// <summary>
    /// **参数解释**： 次数 **取值范围**： 不涉及
    /// </summary>

    std::string getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(const std::string& value);

    /// <summary>
    /// **参数解释**： 项 **取值范围**： 不涉及
    /// </summary>

    std::string getItem() const;
    bool itemIsSet() const;
    void unsetitem();
    void setItem(const std::string& value);

    /// <summary>
    /// **参数解释**： 项名称 **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string count_;
    bool countIsSet_;
    std::string item_;
    bool itemIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessTopMemberVO_H_
