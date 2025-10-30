
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Search_criteriasBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Search_criteriasBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/GetQuerySearchCriteriasBody.h>
#include <string>
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
class HUAWEICLOUD_LTS_V2_EXPORT  Search_criteriasBody
    : public ModelBase
{
public:
    Search_criteriasBody();
    virtual ~Search_criteriasBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Search_criteriasBody members

    /// <summary>
    /// 单个日志流的快速查询
    /// </summary>

    std::vector<GetQuerySearchCriteriasBody>& getCriterias();
    bool criteriasIsSet() const;
    void unsetcriterias();
    void setCriterias(const std::vector<GetQuerySearchCriteriasBody>& value);

    /// <summary>
    /// 日志流id
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 日志流名称
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);

    /// <summary>
    /// **参数解释：** 快速查询类型。 **取值范围：** - ORIGINALLOG：原始日志 - VISUALIZATION：可视化日志
    /// </summary>

    std::string getSearchType() const;
    bool searchTypeIsSet() const;
    void unsetsearchType();
    void setSearchType(const std::string& value);


protected:
    std::vector<GetQuerySearchCriteriasBody> criterias_;
    bool criteriasIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;
    std::string searchType_;
    bool searchTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Search_criteriasBody_H_
