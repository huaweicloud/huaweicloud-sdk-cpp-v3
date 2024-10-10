
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_TagCondition_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_TagCondition_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  TagCondition
    : public ModelBase
{
public:
    TagCondition();
    virtual ~TagCondition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagCondition members

    /// <summary>
    /// 防护动作
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 字段内容
    /// </summary>

    std::vector<std::string>& getContents();
    bool contentsIsSet() const;
    void unsetcontents();
    void setContents(const std::vector<std::string>& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::vector<std::string> contents_;
    bool contentsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_TagCondition_H_
