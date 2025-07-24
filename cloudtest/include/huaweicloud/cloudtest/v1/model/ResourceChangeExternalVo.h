
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResourceChangeExternalVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResourceChangeExternalVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/ElementResourceChangeExternalVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 历史记录字段变更列表
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ResourceChangeExternalVo
    : public ModelBase
{
public:
    ResourceChangeExternalVo();
    virtual ~ResourceChangeExternalVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceChangeExternalVo members

    /// <summary>
    /// 变更字段
    /// </summary>

    std::string getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetfieldName();
    void setFieldName(const std::string& value);

    /// <summary>
    /// 测试用例自定义字段类型
    /// </summary>

    std::string getCustomFieldType() const;
    bool customFieldTypeIsSet() const;
    void unsetcustomFieldType();
    void setCustomFieldType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ElementResourceChangeExternalVo getOldChangeInfo() const;
    bool oldChangeInfoIsSet() const;
    void unsetoldChangeInfo();
    void setOldChangeInfo(const ElementResourceChangeExternalVo& value);

    /// <summary>
    /// 
    /// </summary>

    ElementResourceChangeExternalVo getNewChangeInfo() const;
    bool newChangeInfoIsSet() const;
    void unsetnewChangeInfo();
    void setNewChangeInfo(const ElementResourceChangeExternalVo& value);


protected:
    std::string fieldName_;
    bool fieldNameIsSet_;
    std::string customFieldType_;
    bool customFieldTypeIsSet_;
    ElementResourceChangeExternalVo oldChangeInfo_;
    bool oldChangeInfoIsSet_;
    ElementResourceChangeExternalVo newChangeInfo_;
    bool newChangeInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResourceChangeExternalVo_H_
