
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseIdAndTypeInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseIdAndTypeInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用例列表信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CaseIdAndTypeInfo
    : public ModelBase
{
public:
    CaseIdAndTypeInfo();
    virtual ~CaseIdAndTypeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CaseIdAndTypeInfo members

    /// <summary>
    /// 用例id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 用例类型, 对应ServiceType
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseIdAndTypeInfo_H_
