
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ElementResourceChangeExternalVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ElementResourceChangeExternalVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ElementResourceChangeExternalVo
    : public ModelBase
{
public:
    ElementResourceChangeExternalVo();
    virtual ~ElementResourceChangeExternalVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ElementResourceChangeExternalVo members

    /// <summary>
    /// 工作项类型
    /// </summary>

    std::string getTrackerName() const;
    bool trackerNameIsSet() const;
    void unsettrackerName();
    void setTrackerName(const std::string& value);

    /// <summary>
    /// 值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// key
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 对象值
    /// </summary>

    Object getObjectValue() const;
    bool objectValueIsSet() const;
    void unsetobjectValue();
    void setObjectValue(const Object& value);

    /// <summary>
    /// 对象key
    /// </summary>

    Object getObjectKey() const;
    bool objectKeyIsSet() const;
    void unsetobjectKey();
    void setObjectKey(const Object& value);

    /// <summary>
    /// 缺陷类型
    /// </summary>

    Object getTrackerNames() const;
    bool trackerNamesIsSet() const;
    void unsettrackerNames();
    void setTrackerNames(const Object& value);

    /// <summary>
    /// 归属看板信息，用例关联工作项信息使用
    /// </summary>

    std::vector<Object>& getBoardInfo();
    bool boardInfoIsSet() const;
    void unsetboardInfo();
    void setBoardInfo(const std::vector<Object>& value);


protected:
    std::string trackerName_;
    bool trackerNameIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string key_;
    bool keyIsSet_;
    Object objectValue_;
    bool objectValueIsSet_;
    Object objectKey_;
    bool objectKeyIsSet_;
    Object trackerNames_;
    bool trackerNamesIsSet_;
    std::vector<Object> boardInfo_;
    bool boardInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ElementResourceChangeExternalVo_H_
