
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSIndexConfigInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSIndexConfigInfo_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/LTSFullTextIndexInfo.h>
#include <string>
#include <huaweicloud/lts/v2/model/LTSFieldsInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  LTSIndexConfigInfo
    : public ModelBase
{
public:
    LTSIndexConfigInfo();
    virtual ~LTSIndexConfigInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LTSIndexConfigInfo members

    /// <summary>
    /// 日志流ID
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LTSFullTextIndexInfo getFullTextIndex() const;
    bool fullTextIndexIsSet() const;
    void unsetfullTextIndex();
    void setFullTextIndex(const LTSFullTextIndexInfo& value);

    /// <summary>
    /// 字段索引配置
    /// </summary>

    std::vector<LTSFieldsInfo>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<LTSFieldsInfo>& value);


protected:
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    LTSFullTextIndexInfo fullTextIndex_;
    bool fullTextIndexIsSet_;
    std::vector<LTSFieldsInfo> fields_;
    bool fieldsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSIndexConfigInfo_H_
