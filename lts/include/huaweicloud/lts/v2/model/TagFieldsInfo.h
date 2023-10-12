
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_TagFieldsInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_TagFieldsInfo_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 调用成功时的返回值。
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  TagFieldsInfo
    : public ModelBase
{
public:
    TagFieldsInfo();
    virtual ~TagFieldsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagFieldsInfo members

    /// <summary>
    /// 字段名称
    /// </summary>

    std::string getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetfieldName();
    void setFieldName(const std::string& value);

    /// <summary>
    /// 字段类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 内容
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 是否解析
    /// </summary>

    bool isIsAnalysis() const;
    bool isAnalysisIsSet() const;
    void unsetisAnalysis();
    void setIsAnalysis(bool value);

    /// <summary>
    /// 字段名称
    /// </summary>

    int32_t getIndex() const;
    bool indexIsSet() const;
    void unsetindex();
    void setIndex(int32_t value);


protected:
    std::string fieldName_;
    bool fieldNameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string content_;
    bool contentIsSet_;
    bool isAnalysis_;
    bool isAnalysisIsSet_;
    int32_t index_;
    bool indexIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_TagFieldsInfo_H_
